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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTNACOSHISTORYCONFIGSREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_LISTNACOSHISTORYCONFIGSREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ListNacosHistoryConfigsRequest : public RpcServiceRequest {
public:
	ListNacosHistoryConfigsRequest();
	~ListNacosHistoryConfigsRequest();
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDataId() const;
	void setDataId(const std::string &dataId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getGroup() const;
	void setGroup(const std::string &group);

private:
	int pageNum_;
	std::string instanceId_;
	std::string dataId_;
	std::string regionId_;
	std::string namespaceId_;
	std::string requestPars_;
	int pageSize_;
	std::string acceptLanguage_;
	std::string group_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_LISTNACOSHISTORYCONFIGSREQUEST_H_
