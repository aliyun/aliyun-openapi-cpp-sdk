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

#ifndef ALIBABACLOUD_RESOURCESHARING_MODEL_LISTRESOURCESHAREASSOCIATIONSREQUEST_H_
#define ALIBABACLOUD_RESOURCESHARING_MODEL_LISTRESOURCESHAREASSOCIATIONSREQUEST_H_

#include <alibabacloud/resourcesharing/ResourceSharingExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceSharing {
namespace Model {
class ALIBABACLOUD_RESOURCESHARING_EXPORT ListResourceShareAssociationsRequest : public RpcServiceRequest {
public:
	ListResourceShareAssociationsRequest();
	~ListResourceShareAssociationsRequest();
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getResourceShareIds() const;
	void setResourceShareIds(const std::vector<std::string> &resourceShareIds);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getTarget() const;
	void setTarget(const std::string &target);
	std::string getAssociationType() const;
	void setAssociationType(const std::string &associationType);
	std::string getAssociationStatus() const;
	void setAssociationStatus(const std::string &associationStatus);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string nextToken_;
	std::vector<std::string> resourceShareIds_;
	std::string resourceId_;
	std::string target_;
	std::string associationType_;
	std::string associationStatus_;
	int maxResults_;
};
} // namespace Model
} // namespace ResourceSharing
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCESHARING_MODEL_LISTRESOURCESHAREASSOCIATIONSREQUEST_H_
