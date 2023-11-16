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

#ifndef ALIBABACLOUD_CSAS_MODEL_GETREGISTRATIONPOLICYRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_GETREGISTRATIONPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT GetRegistrationPolicyResult : public ServiceResult
			{
			public:
				struct LimitDetailItem
				{
					struct LimitCount
					{
						int all;
						int pC;
						int mobile;
					};
					LimitCount limitCount;
					std::string deviceBelong;
					std::string limitType;
				};


				GetRegistrationPolicyResult();
				explicit GetRegistrationPolicyResult(const std::string &payload);
				~GetRegistrationPolicyResult();
				std::string getStatus()const;
				std::string getMatchMode()const;
				std::string getDescription()const;
				long getPriority()const;
				std::vector<std::string> getUserGroupIds()const;
				std::string getCreateTime()const;
				std::vector<LimitDetailItem> getLimitDetail()const;
				std::vector<std::string> getWhitelist()const;
				std::string getPolicyId()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string matchMode_;
				std::string description_;
				long priority_;
				std::vector<std::string> userGroupIds_;
				std::string createTime_;
				std::vector<LimitDetailItem> limitDetail_;
				std::vector<std::string> whitelist_;
				std::string policyId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_GETREGISTRATIONPOLICYRESULT_H_