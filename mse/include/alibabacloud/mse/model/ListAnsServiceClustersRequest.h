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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTANSSERVICECLUSTERSREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_LISTANSSERVICECLUSTERSREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ListAnsServiceClustersRequest : public RpcServiceRequest {
public:
	ListAnsServiceClustersRequest();
	~ListAnsServiceClustersRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getClusterName() const;
	void setClusterName(const std::string &clusterName);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string mseSessionId_;
	std::string clusterName_;
	int pageNum_;
	std::string namespaceId_;
	int pageSize_;
	std::string serviceName_;
	std::string clusterId_;
	std::string groupName_;
	std::string instanceId_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_LISTANSSERVICECLUSTERSREQUEST_H_
