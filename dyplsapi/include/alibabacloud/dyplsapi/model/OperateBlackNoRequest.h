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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_OPERATEBLACKNOREQUEST_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_OPERATEBLACKNOREQUEST_H_

#include <alibabacloud/dyplsapi/DyplsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dyplsapi {
namespace Model {
class ALIBABACLOUD_DYPLSAPI_EXPORT OperateBlackNoRequest : public RpcServiceRequest {
public:
	OperateBlackNoRequest();
	~OperateBlackNoRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTips() const;
	void setTips(const std::string &tips);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPoolKey() const;
	void setPoolKey(const std::string &poolKey);
	std::string getBlackNo() const;
	void setBlackNo(const std::string &blackNo);
	std::string getOperateType() const;
	void setOperateType(const std::string &operateType);

private:
	long resourceOwnerId_;
	std::string tips_;
	std::string accessKeyId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string poolKey_;
	std::string blackNo_;
	std::string operateType_;
};
} // namespace Model
} // namespace Dyplsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_OPERATEBLACKNOREQUEST_H_
