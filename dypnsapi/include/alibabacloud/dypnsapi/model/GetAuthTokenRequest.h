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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_GETAUTHTOKENREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_GETAUTHTOKENREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT GetAuthTokenRequest : public RpcServiceRequest {
public:
	GetAuthTokenRequest();
	~GetAuthTokenRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getOrigin() const;
	void setOrigin(const std::string &origin);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSceneCode() const;
	void setSceneCode(const std::string &sceneCode);
	int getCuApiCode() const;
	void setCuApiCode(int cuApiCode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getCtApiCode() const;
	void setCtApiCode(int ctApiCode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getUrl() const;
	void setUrl(const std::string &url);
	int getBizType() const;
	void setBizType(int bizType);
	int getCmApiCode() const;
	void setCmApiCode(int cmApiCode);

private:
	long resourceOwnerId_;
	std::string origin_;
	std::string accessKeyId_;
	std::string sceneCode_;
	int cuApiCode_;
	std::string resourceOwnerAccount_;
	int ctApiCode_;
	long ownerId_;
	std::string version_;
	std::string url_;
	int bizType_;
	int cmApiCode_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_GETAUTHTOKENREQUEST_H_
