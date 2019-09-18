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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_LISTSTASTATUSREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_LISTSTASTATUSREQUEST_H_

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
			class ALIBABACLOUD_CLOUDWF_EXPORT ListStaStatusRequest : public RpcServiceRequest
			{

			public:
				ListStaStatusRequest();
				~ListStaStatusRequest();

				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSearchSsid()const;
				void setSearchSsid(const std::string& searchSsid);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				std::string getSearchMac()const;
				void setSearchMac(const std::string& searchMac);
				std::string getSearchDescription()const;
				void setSearchDescription(const std::string& searchDescription);
				std::string getOrderCol()const;
				void setOrderCol(const std::string& orderCol);
				std::string getSearchGroupName()const;
				void setSearchGroupName(const std::string& searchGroupName);
				int getSearchStatus()const;
				void setSearchStatus(int searchStatus);
				int getLength()const;
				void setLength(int length);
				std::string getSearchUsername()const;
				void setSearchUsername(const std::string& searchUsername);
				std::string getOrderDir()const;
				void setOrderDir(const std::string& orderDir);
				std::string getSearchProtocal()const;
				void setSearchProtocal(const std::string& searchProtocal);
				std::string getSearchApName()const;
				void setSearchApName(const std::string& searchApName);
				std::string getSearchIp()const;
				void setSearchIp(const std::string& searchIp);

            private:
				std::string accessKeyId_;
				std::string searchSsid_;
				int pageIndex_;
				std::string searchMac_;
				std::string searchDescription_;
				std::string orderCol_;
				std::string searchGroupName_;
				int searchStatus_;
				int length_;
				std::string searchUsername_;
				std::string orderDir_;
				std::string searchProtocal_;
				std::string searchApName_;
				std::string searchIp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_LISTSTASTATUSREQUEST_H_