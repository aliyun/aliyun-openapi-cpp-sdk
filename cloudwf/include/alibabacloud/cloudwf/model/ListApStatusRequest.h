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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_LISTAPSTATUSREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_LISTAPSTATUSREQUEST_H_

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
			class ALIBABACLOUD_CLOUDWF_EXPORT ListApStatusRequest : public RpcServiceRequest
			{

			public:
				ListApStatusRequest();
				~ListApStatusRequest();

				std::string getSearchName()const;
				void setSearchName(const std::string& searchName);
				std::string getSearchWanIp()const;
				void setSearchWanIp(const std::string& searchWanIp);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSearchMac()const;
				void setSearchMac(const std::string& searchMac);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				std::string getOrderCol()const;
				void setOrderCol(const std::string& orderCol);
				std::string getSearchGroupName()const;
				void setSearchGroupName(const std::string& searchGroupName);
				int getSearchStatus()const;
				void setSearchStatus(int searchStatus);
				std::string getSearchApModelName()const;
				void setSearchApModelName(const std::string& searchApModelName);
				int getLength()const;
				void setLength(int length);
				std::string getOrderDir()const;
				void setOrderDir(const std::string& orderDir);
				int getSearchBssEquals()const;
				void setSearchBssEquals(int searchBssEquals);
				long getSearchSwVersion()const;
				void setSearchSwVersion(long searchSwVersion);
				std::string getSearchCompanyName()const;
				void setSearchCompanyName(const std::string& searchCompanyName);

            private:
				std::string searchName_;
				std::string searchWanIp_;
				std::string accessKeyId_;
				std::string searchMac_;
				int pageIndex_;
				std::string orderCol_;
				std::string searchGroupName_;
				int searchStatus_;
				std::string searchApModelName_;
				int length_;
				std::string orderDir_;
				int searchBssEquals_;
				long searchSwVersion_;
				std::string searchCompanyName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_LISTAPSTATUSREQUEST_H_