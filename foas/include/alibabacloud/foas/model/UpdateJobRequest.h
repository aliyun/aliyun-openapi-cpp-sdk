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

#ifndef ALIBABACLOUD_FOAS_MODEL_UPDATEJOBREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_UPDATEJOBREQUEST_H_

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
			class ALIBABACLOUD_FOAS_EXPORT UpdateJobRequest : public RoaServiceRequest
			{

			public:
				UpdateJobRequest();
				~UpdateJobRequest();

				std::string getQueueName()const;
				void setQueueName(const std::string& queueName);
				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getCode()const;
				void setCode(const std::string& code);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getPlanJson()const;
				void setPlanJson(const std::string& planJson);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getPackages()const;
				void setPackages(const std::string& packages);
				long getFolderId()const;
				void setFolderId(long folderId);
				std::string getProperties()const;
				void setProperties(const std::string& properties);
				std::string getJobName()const;
				void setJobName(const std::string& jobName);

            private:
				std::string queueName_;
				std::string projectName_;
				std::string code_;
				std::string regionId_;
				std::string description_;
				std::string planJson_;
				std::string engineVersion_;
				std::string clusterId_;
				std::string packages_;
				long folderId_;
				std::string properties_;
				std::string jobName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_UPDATEJOBREQUEST_H_