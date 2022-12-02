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

#ifndef ALIBABACLOUD_DTS_MODEL_LISTDEDICATEDCLUSTERREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_LISTDEDICATEDCLUSTERREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT ListDedicatedClusterRequest : public RpcServiceRequest {
public:
	ListDedicatedClusterRequest();
	~ListDedicatedClusterRequest();
	std::string getOrderDirection() const;
	void setOrderDirection(const std::string &orderDirection);
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getOrderColumn() const;
	void setOrderColumn(const std::string &orderColumn);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getParams() const;
	void setParams(const std::string &params);

private:
	std::string orderDirection_;
	std::string type_;
	int pageNumber_;
	std::string orderColumn_;
	std::string regionId_;
	int pageSize_;
	std::string state_;
	std::string ownerId_;
	std::string params_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_LISTDEDICATEDCLUSTERREQUEST_H_
