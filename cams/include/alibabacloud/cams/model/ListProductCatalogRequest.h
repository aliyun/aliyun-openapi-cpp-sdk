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

#ifndef ALIBABACLOUD_CAMS_MODEL_LISTPRODUCTCATALOGREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_LISTPRODUCTCATALOGREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT ListProductCatalogRequest : public RpcServiceRequest {
public:
	ListProductCatalogRequest();
	~ListProductCatalogRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getBefore() const;
	void setBefore(const std::string &before);
	std::string getExtendFunction() const;
	void setExtendFunction(const std::string &extendFunction);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getMetaVersion() const;
	void setMetaVersion(const std::string &metaVersion);
	long getLimit() const;
	void setLimit(long limit);
	std::string getAfter() const;
	void setAfter(const std::string &after);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getBusinessId() const;
	void setBusinessId(long businessId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);
	std::string getFields() const;
	void setFields(const std::string &fields);

private:
	long resourceOwnerId_;
	std::string before_;
	std::string extendFunction_;
	std::string accessKeyId_;
	std::string metaVersion_;
	long limit_;
	std::string after_;
	std::string routeName_;
	std::string resourceOwnerAccount_;
	long businessId_;
	long ownerId_;
	std::string custSpaceId_;
	std::string fields_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_LISTPRODUCTCATALOGREQUEST_H_
