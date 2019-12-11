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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTEVENTRULETARGETSRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_PUTEVENTRULETARGETSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT PutEventRuleTargetsResult : public ServiceResult
			{
			public:
				struct ContactParameter
				{
					std::string contactGroupName;
					std::string level;
					int id;
				};
				struct MnsParameter
				{
					std::string region;
					int id;
					std::string queue;
				};
				struct FcParameter
				{
					std::string functionName;
					std::string serviceName;
					std::string region;
					int id;
				};


				PutEventRuleTargetsResult();
				explicit PutEventRuleTargetsResult(const std::string &payload);
				~PutEventRuleTargetsResult();
				std::string getMessage()const;
				std::vector<MnsParameter> getFailedMnsParameters()const;
				std::vector<FcParameter> getFailedFcParameters()const;
				std::string getFailedParameterCount()const;
				std::vector<ContactParameter> getFailedContactParameters()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<MnsParameter> failedMnsParameters_;
				std::vector<FcParameter> failedFcParameters_;
				std::string failedParameterCount_;
				std::vector<ContactParameter> failedContactParameters_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_PUTEVENTRULETARGETSRESULT_H_