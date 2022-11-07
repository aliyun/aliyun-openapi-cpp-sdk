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

#ifndef ALIBABACLOUD_OOS_MODEL_GETAPPLICATIONGROUPRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_GETAPPLICATIONGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT GetApplicationGroupResult : public ServiceResult
			{
			public:
				struct ApplicationGroup
				{
					std::string status;
					std::string deployRegionId;
					std::string progress;
					std::string description;
					std::string applicationName;
					std::string importTagKey;
					std::string statusReason;
					std::string cmsGroupId;
					std::string createDate;
					std::string name;
					std::string importTagValue;
					std::string updateDate;
					std::string deployParameters;
					std::string deployOutputs;
				};


				GetApplicationGroupResult();
				explicit GetApplicationGroupResult(const std::string &payload);
				~GetApplicationGroupResult();
				ApplicationGroup getApplicationGroup()const;

			protected:
				void parse(const std::string &payload);
			private:
				ApplicationGroup applicationGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_GETAPPLICATIONGROUPRESULT_H_