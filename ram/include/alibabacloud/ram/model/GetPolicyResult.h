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

#ifndef ALIBABACLOUD_RAM_MODEL_GETPOLICYRESULT_H_
#define ALIBABACLOUD_RAM_MODEL_GETPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ram/RamExport.h>

namespace AlibabaCloud
{
	namespace Ram
	{
		namespace Model
		{
			class ALIBABACLOUD_RAM_EXPORT GetPolicyResult : public ServiceResult
			{
			public:
				struct Policy
				{
					std::string updateDate;
					std::string policyType;
					std::string description;
					int attachmentCount;
					std::string defaultVersion;
					std::string policyName;
					std::string policyDocument;
					std::string createDate;
				};
				struct DefaultPolicyVersion
				{
					std::string versionId;
					bool isDefaultVersion;
					std::string policyDocument;
					std::string createDate;
				};


				GetPolicyResult();
				explicit GetPolicyResult(const std::string &payload);
				~GetPolicyResult();
				Policy getPolicy()const;
				DefaultPolicyVersion getDefaultPolicyVersion()const;

			protected:
				void parse(const std::string &payload);
			private:
				Policy policy_;
				DefaultPolicyVersion defaultPolicyVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_GETPOLICYRESULT_H_