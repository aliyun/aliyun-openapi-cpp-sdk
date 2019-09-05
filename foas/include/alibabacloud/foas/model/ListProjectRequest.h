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

#ifndef ALIBABACLOUD_FOAS_MODEL_LISTPROJECTREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_LISTPROJECTREQUEST_H_

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
			class ALIBABACLOUD_FOAS_EXPORT ListProjectRequest : public RoaServiceRequest
			{

			public:
				ListProjectRequest();
				~ListProjectRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getDeployType()const;
				void setDeployType(const std::string& deployType);

            private:
				std::string regionId_;
				std::string name_;
				int pageSize_;
				int pageIndex_;
				std::string clusterId_;
				std::string region_;
				std::string deployType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_LISTPROJECTREQUEST_H_