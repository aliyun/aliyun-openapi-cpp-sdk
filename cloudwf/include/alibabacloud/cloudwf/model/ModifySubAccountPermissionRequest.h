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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_MODIFYSUBACCOUNTPERMISSIONREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_MODIFYSUBACCOUNTPERMISSIONREQUEST_H_

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
			class ALIBABACLOUD_CLOUDWF_EXPORT ModifySubAccountPermissionRequest : public RpcServiceRequest
			{

			public:
				ModifySubAccountPermissionRequest();
				~ModifySubAccountPermissionRequest();

				std::vector<long> getShopGroupIds()const;
				void setShopGroupIds(const std::vector<long>& shopGroupIds);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<long> getShopIds()const;
				void setShopIds(const std::vector<long>& shopIds);
				std::string getPagePermission()const;
				void setPagePermission(const std::string& pagePermission);
				long getId()const;
				void setId(long id);
				std::vector<long> getBusinessIds()const;
				void setBusinessIds(const std::vector<long>& businessIds);

            private:
				std::vector<long> shopGroupIds_;
				std::string accessKeyId_;
				std::vector<long> shopIds_;
				std::string pagePermission_;
				long id_;
				std::vector<long> businessIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_MODIFYSUBACCOUNTPERMISSIONREQUEST_H_