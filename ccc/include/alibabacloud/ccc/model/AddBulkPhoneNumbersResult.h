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

#ifndef ALIBABACLOUD_CCC_MODEL_ADDBULKPHONENUMBERSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_ADDBULKPHONENUMBERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT AddBulkPhoneNumbersResult : public ServiceResult
			{
			public:
				struct PhoneNumber
				{
					struct ContactFlow
					{
						std::string type;
						std::string contactFlowId;
						std::string instanceId;
						std::string contactFlowName;
						std::string contactFlowDescription;
					};
					struct SkillGroup
					{
						std::string skillGroupName;
						std::string skillGroupId;
					};
					std::string usage;
					bool testOnly;
					bool allowOutbound;
					std::string number;
					std::string instanceId;
					int remainingTime;
					std::vector<PhoneNumber::SkillGroup> skillGroups;
					int trunks;
					std::string phoneNumberId;
					ContactFlow contactFlow;
					std::string phoneNumberDescription;
				};


				AddBulkPhoneNumbersResult();
				explicit AddBulkPhoneNumbersResult(const std::string &payload);
				~AddBulkPhoneNumbersResult();
				std::vector<std::string> getArrearagePhoneNumbers()const;
				std::vector<PhoneNumber> getPhoneNumbers()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<std::string> getFailedPhoneNumbers()const;
				std::vector<std::string> getUserdPhoneNumbers()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> arrearagePhoneNumbers_;
				std::vector<PhoneNumber> phoneNumbers_;
				std::string message_;
				int httpStatusCode_;
				std::vector<std::string> failedPhoneNumbers_;
				std::vector<std::string> userdPhoneNumbers_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_ADDBULKPHONENUMBERSRESULT_H_