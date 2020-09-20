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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTDEVICEGROUPSREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_LISTDEVICEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT ListDeviceGroupsRequest : public RpcServiceRequest
			{

			public:
				ListDeviceGroupsRequest();
				~ListDeviceGroupsRequest();

				int getIsPage()const;
				void setIsPage(int isPage);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getCorpIdList()const;
				void setCorpIdList(const std::string& corpIdList);
				std::string getDeviceCodeList()const;
				void setDeviceCodeList(const std::string& deviceCodeList);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getGroup()const;
				void setGroup(const std::string& group);

            private:
				int isPage_;
				int pageNum_;
				std::string corpIdList_;
				std::string deviceCodeList_;
				std::string name_;
				int pageSize_;
				std::string group_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTDEVICEGROUPSREQUEST_H_