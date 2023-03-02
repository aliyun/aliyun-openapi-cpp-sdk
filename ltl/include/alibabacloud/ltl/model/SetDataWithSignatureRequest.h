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

#ifndef ALIBABACLOUD_LTL_MODEL_SETDATAWITHSIGNATUREREQUEST_H_
#define ALIBABACLOUD_LTL_MODEL_SETDATAWITHSIGNATUREREQUEST_H_

#include <alibabacloud/ltl/LtlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ltl {
namespace Model {
class ALIBABACLOUD_LTL_EXPORT SetDataWithSignatureRequest : public RpcServiceRequest {
public:
	SetDataWithSignatureRequest();
	~SetDataWithSignatureRequest();
	std::string getIotSignature() const;
	void setIotSignature(const std::string &iotSignature);
	std::string getIotAuthType() const;
	void setIotAuthType(const std::string &iotAuthType);
	std::string getIotIdSource() const;
	void setIotIdSource(const std::string &iotIdSource);
	std::string getApiVersion() const;
	void setApiVersion(const std::string &apiVersion);
	std::string getProductKey() const;
	void setProductKey(const std::string &productKey);
	std::string getIotId() const;
	void setIotId(const std::string &iotId);
	std::string getIotDataDigest() const;
	void setIotDataDigest(const std::string &iotDataDigest);
	std::string getIotIdServiceProvider() const;
	void setIotIdServiceProvider(const std::string &iotIdServiceProvider);
	std::string getValue() const;
	void setValue(const std::string &value);
	std::string getKey() const;
	void setKey(const std::string &key);

private:
	std::string iotSignature_;
	std::string iotAuthType_;
	std::string iotIdSource_;
	std::string apiVersion_;
	std::string productKey_;
	std::string iotId_;
	std::string iotDataDigest_;
	std::string iotIdServiceProvider_;
	std::string value_;
	std::string key_;
};
} // namespace Model
} // namespace Ltl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTL_MODEL_SETDATAWITHSIGNATUREREQUEST_H_
