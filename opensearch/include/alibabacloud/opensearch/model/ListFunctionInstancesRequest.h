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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_LISTFUNCTIONINSTANCESREQUEST_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_LISTFUNCTIONINSTANCESREQUEST_H_

#include <alibabacloud/opensearch/OpenSearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OpenSearch {
namespace Model {
class ALIBABACLOUD_OPENSEARCH_EXPORT ListFunctionInstancesRequest : public RoaServiceRequest {
public:
	ListFunctionInstancesRequest();
	~ListFunctionInstancesRequest();
	std::string getOutput() const;
	void setOutput(const std::string &output);
	std::string getModelType() const;
	void setModelType(const std::string &modelType);
	std::string getFunctionName() const;
	void setFunctionName(const std::string &functionName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getFunctionType() const;
	void setFunctionType(const std::string &functionType);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getAppGroupIdentity() const;
	void setAppGroupIdentity(const std::string &appGroupIdentity);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	std::string output_;
	std::string modelType_;
	std::string functionName_;
	int pageSize_;
	std::string functionType_;
	std::string source_;
	std::string appGroupIdentity_;
	int pageNumber_;
};
} // namespace Model
} // namespace OpenSearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_LISTFUNCTIONINSTANCESREQUEST_H_
