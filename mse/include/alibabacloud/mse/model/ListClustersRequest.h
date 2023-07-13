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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTCLUSTERSREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_LISTCLUSTERSREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ListClustersRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListClustersRequest();
	~ListClustersRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getClusterAliasName() const;
	void setClusterAliasName(const std::string &clusterAliasName);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string mseSessionId_;
	int pageNum_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string requestPars_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string clusterAliasName_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_LISTCLUSTERSREQUEST_H_
