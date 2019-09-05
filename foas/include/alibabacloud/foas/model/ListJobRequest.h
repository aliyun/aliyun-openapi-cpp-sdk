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

#ifndef ALIBABACLOUD_FOAS_MODEL_LISTJOBREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_LISTJOBREQUEST_H_

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
			class ALIBABACLOUD_FOAS_EXPORT ListJobRequest : public RoaServiceRequest
			{

			public:
				ListJobRequest();
				~ListJobRequest();

				std::string getQueueName()const;
				void setQueueName(const std::string& queueName);
				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				bool getIsShowFullField()const;
				void setIsShowFullField(bool isShowFullField);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getJobType()const;
				void setJobType(const std::string& jobType);
				std::string getApiType()const;
				void setApiType(const std::string& apiType);
				std::string getJobName()const;
				void setJobName(const std::string& jobName);
				long getFolderId()const;
				void setFolderId(long folderId);

            private:
				std::string queueName_;
				std::string projectName_;
				std::string regionId_;
				int pageSize_;
				bool isShowFullField_;
				int pageIndex_;
				std::string engineVersion_;
				std::string clusterId_;
				std::string jobType_;
				std::string apiType_;
				std::string jobName_;
				long folderId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_LISTJOBREQUEST_H_