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

#ifndef ALIBABACLOUD_IOT_MODEL_QUERYDEVICEGROUPLISTREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_QUERYDEVICEGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT QueryDeviceGroupListRequest : public RpcServiceRequest
			{

			public:
				QueryDeviceGroupListRequest();
				~QueryDeviceGroupListRequest();

<<<<<<< HEAD
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getSuperGroupId()const;
				void setSuperGroupId(const std::string& superGroupId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string iotInstanceId_;
				std::string superGroupId_;
				int pageSize_;
				int currentPage_;
				std::string groupName_;
				std::string accessKeyId_;
=======
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getSuperGroupId()const;
				void setSuperGroupId(const std::string& superGroupId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string iotInstanceId_;
				std::string superGroupId_;
				int pageSize_;
				int currentPage_;
				std::string groupName_;
				std::string accessKeyId_;
>>>>>>> master

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_QUERYDEVICEGROUPLISTREQUEST_H_