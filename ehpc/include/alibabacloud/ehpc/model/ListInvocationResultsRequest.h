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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTINVOCATIONRESULTSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTINVOCATIONRESULTSREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListInvocationResultsRequest : public RpcServiceRequest {
public:
	struct Instance {
		std::string id;
	};
	ListInvocationResultsRequest();
	~ListInvocationResultsRequest();
	std::vector<Instance> getInstance() const;
	void setInstance(const std::vector<Instance> &instance);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getCommandId() const;
	void setCommandId(const std::string &commandId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getInvokeRecordStatus() const;
	void setInvokeRecordStatus(const std::string &invokeRecordStatus);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::vector<Instance> instance_;
	std::string clusterId_;
	std::string commandId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string invokeRecordStatus_;
	int pageSize_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTINVOCATIONRESULTSREQUEST_H_
