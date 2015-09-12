note
	description : "bank_account application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
	local
		ac1:ACCOUNT
		ac2:ACCOUNT
		do
			create ac1.make
			ac1.deposit (70)
			check ac1.balance = 70 end
			check ac1.credit_limit = 0 end

			ac1.set_credit_limit (50)

			create ac2.make ()
			ac1.transfer (100, ac2)
			check ac1.balance = -30 end
			check ac1.credit_limit = 50 end
			io.put_string ("passes")
		end
end
