/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_SMARTAG_MODEL_ADDACLRULERESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_ADDACLRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT AddACLRuleResult : public ServiceResult
			{
			public:


				AddACLRuleResult();
				explicit AddACLRuleResult(const std::string &payload);
				~AddACLRuleResult();
				std::string getPolicy()const;
				std::string getDescription()const;
				std::string getSourcePortRange()const;
				std::string getSourceCidr()const;
				int getPriority()const;
				std::string getAclId()const;
				std::string getAcrId()const;
				std::string getDestPortRange()const;
				std::string getDirection()const;
				long getGmtCreate()const;
				std::string getType()const;
				std::string getDestCidr()const;
				std::string getIpProtocol()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string policy_;
				std::string description_;
				std::string sourcePortRange_;
				std::string sourceCidr_;
				int priority_;
				std::string aclId_;
				std::string acrId_;
				std::string destPortRange_;
				std::string direction_;
				long gmtCreate_;
				std::string type_;
				std::string destCidr_;
				std::string ipProtocol_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_ADDACLRULERESULT_H_