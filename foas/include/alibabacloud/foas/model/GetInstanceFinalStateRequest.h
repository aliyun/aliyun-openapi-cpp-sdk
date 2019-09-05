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

#ifndef ALIBABACLOUD_FOAS_MODEL_GETINSTANCEFINALSTATEREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_GETINSTANCEFINALSTATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT GetInstanceFinalStateRequest : public RoaServiceRequest
			{

			public:
				GetInstanceFinalStateRequest();
				~GetInstanceFinalStateRequest();

				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				long getInstanceId()const;
				void setInstanceId(long instanceId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getJobName()const;
				void setJobName(const std::string& jobName);

            private:
				std::string projectName_;
				long instanceId_;
				std::string regionId_;
				std::string jobName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_GETINSTANCEFINALSTATEREQUEST_H_