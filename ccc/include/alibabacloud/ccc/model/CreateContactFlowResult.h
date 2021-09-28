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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATECONTACTFLOWRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_CREATECONTACTFLOWRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT CreateContactFlowResult : public ServiceResult
			{
			public:
				struct ContactFlow
				{
					struct ContactFlowVersion
					{
						std::string lastModified;
						std::string status;
						std::string lastModifiedBy;
						std::string lockedBy;
						std::string contactFlowVersionId;
						std::string version;
						std::string content;
						std::string canvas;
						std::string contactFlowVersionDescription;
					};
					struct PhoneNumber
					{
						std::string usage;
						bool testOnly;
						bool allowOutbound;
						std::string number;
						std::string instanceId;
						int remainingTime;
						int trunks;
						std::string phoneNumberId;
						std::string phoneNumberDescription;
					};
					std::vector<PhoneNumber> phoneNumbers;
					std::string type;
					std::string appliedVersion;
					std::vector<ContactFlowVersion> versions;
					std::string contactFlowId;
					std::string instanceId;
					std::string contactFlowName;
					std::string contactFlowDescription;
				};


				CreateContactFlowResult();
				explicit CreateContactFlowResult(const std::string &payload);
				~CreateContactFlowResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				ContactFlow getContactFlow()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				ContactFlow contactFlow_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_CREATECONTACTFLOWRESULT_H_