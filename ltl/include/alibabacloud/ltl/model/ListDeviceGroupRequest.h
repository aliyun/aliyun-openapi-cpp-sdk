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

#ifndef ALIBABACLOUD_LTL_MODEL_LISTDEVICEGROUPREQUEST_H_
#define ALIBABACLOUD_LTL_MODEL_LISTDEVICEGROUPREQUEST_H_

#include <alibabacloud/ltl/LtlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ltl {
namespace Model {
class ALIBABACLOUD_LTL_EXPORT ListDeviceGroupRequest : public RpcServiceRequest {
public:
	ListDeviceGroupRequest();
	~ListDeviceGroupRequest();
	int getSize() const;
	void setSize(int size);
	int getNum() const;
	void setNum(int num);
	std::string getApiVersion() const;
	void setApiVersion(const std::string &apiVersion);
	std::string getProductKey() const;
	void setProductKey(const std::string &productKey);
	std::string getBizChainId() const;
	void setBizChainId(const std::string &bizChainId);

private:
	int size_;
	int num_;
	std::string apiVersion_;
	std::string productKey_;
	std::string bizChainId_;
};
} // namespace Model
} // namespace Ltl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTL_MODEL_LISTDEVICEGROUPREQUEST_H_
