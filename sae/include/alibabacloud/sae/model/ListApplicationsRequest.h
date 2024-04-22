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

#ifndef ALIBABACLOUD_SAE_MODEL_LISTAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_LISTAPPLICATIONSREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT ListApplicationsRequest : public RoaServiceRequest {
public:
	ListApplicationsRequest();
	~ListApplicationsRequest();
	std::string getAppSource() const;
	void setAppSource(const std::string &appSource);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getFieldValue() const;
	void setFieldValue(const std::string &fieldValue);
	bool getReverse() const;
	void setReverse(bool reverse);
	std::string getFieldType() const;
	void setFieldType(const std::string &fieldType);
	std::string getTags() const;
	void setTags(const std::string &tags);

private:
	std::string appSource_;
	std::string appName_;
	std::string namespaceId_;
	int pageSize_;
	std::string orderBy_;
	int currentPage_;
	std::string fieldValue_;
	bool reverse_;
	std::string fieldType_;
	std::string tags_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_LISTAPPLICATIONSREQUEST_H_
