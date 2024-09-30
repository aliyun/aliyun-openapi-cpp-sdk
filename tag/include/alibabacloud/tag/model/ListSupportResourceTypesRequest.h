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

#ifndef ALIBABACLOUD_TAG_MODEL_LISTSUPPORTRESOURCETYPESREQUEST_H_
#define ALIBABACLOUD_TAG_MODEL_LISTSUPPORTRESOURCETYPESREQUEST_H_

#include <alibabacloud/tag/TagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Tag {
namespace Model {
class ALIBABACLOUD_TAG_EXPORT ListSupportResourceTypesRequest : public RpcServiceRequest {
public:
	ListSupportResourceTypesRequest();
	~ListSupportResourceTypesRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getSupportCode() const;
	void setSupportCode(const std::string &supportCode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getResourceTye() const;
	void setResourceTye(const std::string &resourceTye);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getMaxResult() const;
	void setMaxResult(int maxResult);
	bool getShowItems() const;
	void setShowItems(bool showItems);

private:
	std::string productCode_;
	std::string supportCode_;
	std::string regionId_;
	std::string nextToken_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string resourceTye_;
	long ownerId_;
	int maxResult_;
	bool showItems_;
};
} // namespace Model
} // namespace Tag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_TAG_MODEL_LISTSUPPORTRESOURCETYPESREQUEST_H_
