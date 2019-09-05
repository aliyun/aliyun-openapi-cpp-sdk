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

#ifndef ALIBABACLOUD_FOAS_MODEL_CREATEJOBREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_CREATEJOBREQUEST_H_

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
			class ALIBABACLOUD_FOAS_EXPORT CreateJobRequest : public RoaServiceRequest
			{

			public:
				CreateJobRequest();
				~CreateJobRequest();

				std::string getQueueName()const;
				void setQueueName(const std::string& queueName);
				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getCode()const;
				void setCode(const std::string& code);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getPackages()const;
				void setPackages(const std::string& packages);
				std::string getJobType()const;
				void setJobType(const std::string& jobType);
				std::string getApiType()const;
				void setApiType(const std::string& apiType);
				long getFolderId()const;
				void setFolderId(long folderId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPlanJson()const;
				void setPlanJson(const std::string& planJson);
				std::string getProperties()const;
				void setProperties(const std::string& properties);
				std::string getJobName()const;
				void setJobName(const std::string& jobName);

            private:
				std::string queueName_;
				std::string projectName_;
				std::string code_;
				std::string description_;
				std::string engineVersion_;
				std::string clusterId_;
				std::string packages_;
				std::string jobType_;
				std::string apiType_;
				long folderId_;
				std::string regionId_;
				std::string planJson_;
				std::string properties_;
				std::string jobName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_CREATEJOBREQUEST_H_