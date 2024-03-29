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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERIMAGESREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERIMAGESREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListContainerImagesRequest : public RpcServiceRequest {
public:
	ListContainerImagesRequest();
	~ListContainerImagesRequest();
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getContainerType() const;
	void setContainerType(const std::string &containerType);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string clusterId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string containerType_;
	int pageSize_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTCONTAINERIMAGESREQUEST_H_
