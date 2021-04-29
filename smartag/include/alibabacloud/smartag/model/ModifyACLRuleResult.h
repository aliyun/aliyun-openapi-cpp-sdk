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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYACLRULERESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYACLRULERESULT_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT ModifyACLRuleResult : public ServiceResult
			{
			public:


				ModifyACLRuleResult();
				explicit ModifyACLRuleResult(const std::string &payload);
				~ModifyACLRuleResult();
				std::string getPolicy()const;
				std::string getDescription()const;
				std::string getSourcePortRange()const;
				std::string getSourceCidr()const;
				int getPriority()const;
				std::string getAclId()const;
				std::string getAcrId()const;
				std::string getDestPortRange()const;
				std::vector<std::string> getDpiGroupIds()const;
				std::string getDirection()const;
				std::string getName()const;
				long getGmtCreate()const;
				std::string getDestCidr()const;
				std::vector<std::string> getDpiSignatureIds()const;
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
				std::vector<std::string> dpiGroupIds_;
				std::string direction_;
				std::string name_;
				long gmtCreate_;
				std::string destCidr_;
				std::vector<std::string> dpiSignatureIds_;
				std::string ipProtocol_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYACLRULERESULT_H_