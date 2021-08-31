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

#ifndef ALIBABACLOUD_EDAS_MODEL_INSERTSWIMMINGLANEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_INSERTSWIMMINGLANEREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT InsertSwimmingLaneRequest : public RoaServiceRequest
			{

			public:
				InsertSwimmingLaneRequest();
				~InsertSwimmingLaneRequest();

				std::string getAppInfos()const;
				void setAppInfos(const std::string& appInfos);
				std::string getEntryRules()const;
				void setEntryRules(const std::string& entryRules);
				std::string getLogicalRegionId()const;
				void setLogicalRegionId(const std::string& logicalRegionId);
				bool getEnableRules()const;
				void setEnableRules(bool enableRules);
				long getGroupId()const;
				void setGroupId(long groupId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getTag()const;
				void setTag(const std::string& tag);

            private:
				std::string appInfos_;
				std::string entryRules_;
				std::string logicalRegionId_;
				bool enableRules_;
				long groupId_;
				std::string name_;
				std::string tag_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_INSERTSWIMMINGLANEREQUEST_H_