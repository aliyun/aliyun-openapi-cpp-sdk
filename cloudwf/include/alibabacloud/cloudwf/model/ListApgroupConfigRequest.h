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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_LISTAPGROUPCONFIGREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_LISTAPGROUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT ListApgroupConfigRequest : public RpcServiceRequest
			{

			public:
				ListApgroupConfigRequest();
				~ListApgroupConfigRequest();

				std::string getOrderCol()const;
				void setOrderCol(const std::string& orderCol);
				std::string getSearchName()const;
				void setSearchName(const std::string& searchName);
				int getLength()const;
				void setLength(int length);
				std::string getOrderDir()const;
				void setOrderDir(const std::string& orderDir);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSearchCompany()const;
				void setSearchCompany(const std::string& searchCompany);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);

            private:
				std::string orderCol_;
				std::string searchName_;
				int length_;
				std::string orderDir_;
				std::string accessKeyId_;
				std::string searchCompany_;
				int pageIndex_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_LISTAPGROUPCONFIGREQUEST_H_