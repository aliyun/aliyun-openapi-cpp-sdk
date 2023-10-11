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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYSTATISTICPUBLICREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYSTATISTICPUBLICREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT QueryGateVerifyStatisticPublicRequest : public RpcServiceRequest {
public:
	QueryGateVerifyStatisticPublicRequest();
	~QueryGateVerifyStatisticPublicRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getAuthenticationType() const;
	void setAuthenticationType(int authenticationType);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSceneCode() const;
	void setSceneCode(const std::string &sceneCode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getOsType() const;
	void setOsType(const std::string &osType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);

private:
	long resourceOwnerId_;
	int authenticationType_;
	std::string startDate_;
	std::string accessKeyId_;
	std::string sceneCode_;
	std::string resourceOwnerAccount_;
	std::string prodCode_;
	std::string osType_;
	long ownerId_;
	std::string endDate_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYSTATISTICPUBLICREQUEST_H_
