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

#ifndef ALIBABACLOUD_EDAS_MODEL_UPDATESWIMMINGLANEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_UPDATESWIMMINGLANEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT UpdateSwimmingLaneRequest : public RoaServiceRequest
			{

			public:
				UpdateSwimmingLaneRequest();
				~UpdateSwimmingLaneRequest();

				std::string getAppInfos()const;
				void setAppInfos(const std::string& appInfos);
				long getLaneId()const;
				void setLaneId(long laneId);
				std::string getEntryRules()const;
				void setEntryRules(const std::string& entryRules);
				bool getEnableRules()const;
				void setEnableRules(bool enableRules);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string appInfos_;
				long laneId_;
				std::string entryRules_;
				bool enableRules_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_UPDATESWIMMINGLANEREQUEST_H_