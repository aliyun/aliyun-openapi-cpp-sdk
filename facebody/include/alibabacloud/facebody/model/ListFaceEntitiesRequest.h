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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_LISTFACEENTITIESREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_LISTFACEENTITIESREQUEST_H_

#include <alibabacloud/facebody/FacebodyExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Facebody {
namespace Model {
class ALIBABACLOUD_FACEBODY_EXPORT ListFaceEntitiesRequest : public RpcServiceRequest {
public:
	ListFaceEntitiesRequest();
	~ListFaceEntitiesRequest();
	std::string getEntityIdPrefix() const;
	void setEntityIdPrefix(const std::string &entityIdPrefix);
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	int getLimit() const;
	void setLimit(int limit);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	int getOffset() const;
	void setOffset(int offset);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::string getLabels() const;
	void setLabels(const std::string &labels);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);

private:
	std::string entityIdPrefix_;
	bool formatResultToJson_;
	int limit_;
	std::string ossFile_;
	std::string order_;
	int offset_;
	std::string requestProxyBy_;
	std::string token_;
	std::string labels_;
	std::string dbName_;
};
} // namespace Model
} // namespace Facebody
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FACEBODY_MODEL_LISTFACEENTITIESREQUEST_H_
