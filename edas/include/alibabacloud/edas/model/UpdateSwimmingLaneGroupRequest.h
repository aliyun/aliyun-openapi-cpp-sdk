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

#ifndef ALIBABACLOUD_EDAS_MODEL_UPDATESWIMMINGLANEGROUPREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_UPDATESWIMMINGLANEGROUPREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT UpdateSwimmingLaneGroupRequest : public RoaServiceRequest
			{

			public:
				UpdateSwimmingLaneGroupRequest();
				~UpdateSwimmingLaneGroupRequest();

				std::string getAppIds()const;
				void setAppIds(const std::string& appIds);
				long getGroupId()const;
				void setGroupId(long groupId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getEntryApp()const;
				void setEntryApp(const std::string& entryApp);

            private:
				std::string appIds_;
				long groupId_;
				std::string name_;
				std::string entryApp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_UPDATESWIMMINGLANEGROUPREQUEST_H_