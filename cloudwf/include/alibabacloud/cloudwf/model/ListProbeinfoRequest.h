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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_LISTPROBEINFOREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_LISTPROBEINFOREQUEST_H_

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
			class ALIBABACLOUD_CLOUDWF_EXPORT ListProbeinfoRequest : public RpcServiceRequest
			{

			public:
				ListProbeinfoRequest();
				~ListProbeinfoRequest();

				std::string getOrderCol()const;
				void setOrderCol(const std::string& orderCol);
				std::string getSearchUserMac()const;
				void setSearchUserMac(const std::string& searchUserMac);
				std::string getSearchSensorMac()const;
				void setSearchSensorMac(const std::string& searchSensorMac);
				int getLength()const;
				void setLength(int length);
				std::string getSearchSensorName()const;
				void setSearchSensorName(const std::string& searchSensorName);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				std::string getOrderDir()const;
				void setOrderDir(const std::string& orderDir);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string orderCol_;
				std::string searchUserMac_;
				std::string searchSensorMac_;
				int length_;
				std::string searchSensorName_;
				int pageIndex_;
				std::string orderDir_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_LISTPROBEINFOREQUEST_H_