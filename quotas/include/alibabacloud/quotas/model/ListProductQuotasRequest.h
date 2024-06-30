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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_LISTPRODUCTQUOTASREQUEST_H_
#define ALIBABACLOUD_QUOTAS_MODEL_LISTPRODUCTQUOTASREQUEST_H_

#include <alibabacloud/quotas/QuotasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quotas {
namespace Model {
class ALIBABACLOUD_QUOTAS_EXPORT ListProductQuotasRequest : public RpcServiceRequest {
public:
	struct Dimensions {
		std::string key;
		std::string value;
	};
	ListProductQuotasRequest();
	~ListProductQuotasRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getQuotaActionCode() const;
	void setQuotaActionCode(const std::string &quotaActionCode);
	std::string getGroupCode() const;
	void setGroupCode(const std::string &groupCode);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getKeyWord() const;
	void setKeyWord(const std::string &keyWord);
	std::string getQuotaCategory() const;
	void setQuotaCategory(const std::string &quotaCategory);
	std::string getOriginalContext() const;
	void setOriginalContext(const std::string &originalContext);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getSortField() const;
	void setSortField(const std::string &sortField);
	std::vector<Dimensions> getDimensions() const;
	void setDimensions(const std::vector<Dimensions> &dimensions);

private:
	std::string productCode_;
	std::string quotaActionCode_;
	std::string groupCode_;
	std::string nextToken_;
	std::string sortOrder_;
	std::string keyWord_;
	std::string quotaCategory_;
	std::string originalContext_;
	int maxResults_;
	std::string sortField_;
	std::vector<Dimensions> dimensions_;
};
} // namespace Model
} // namespace Quotas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUOTAS_MODEL_LISTPRODUCTQUOTASREQUEST_H_
