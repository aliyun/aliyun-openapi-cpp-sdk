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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_LISTPRODUCTSBYPOPCODEREQUEST_H_
#define ALIBABACLOUD_LMZTEST_MODEL_LISTPRODUCTSBYPOPCODEREQUEST_H_

#include <alibabacloud/lmztest/LmzTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LmzTest {
namespace Model {
class ALIBABACLOUD_LMZTEST_EXPORT ListProductsByPopCodeRequest : public RpcServiceRequest {
public:
	ListProductsByPopCodeRequest();
	~ListProductsByPopCodeRequest();
	std::string getAuthKey() const;
	void setAuthKey(const std::string &authKey);
	std::string getExtraParams() const;
	void setExtraParams(const std::string &extraParams);
	std::string getServerClientIp() const;
	void setServerClientIp(const std::string &serverClientIp);
	std::string getRequestId() const;
	void setRequestId(const std::string &requestId);
	std::string getClientIp() const;
	void setClientIp(const std::string &clientIp);
	std::string getIdentityDTO() const;
	void setIdentityDTO(const std::string &identityDTO);
	std::string getEnv() const;
	void setEnv(const std::string &env);
	std::string getPopCode() const;
	void setPopCode(const std::string &popCode);

private:
	std::string authKey_;
	std::string extraParams_;
	std::string serverClientIp_;
	std::string requestId_;
	std::string clientIp_;
	std::string identityDTO_;
	std::string env_;
	std::string popCode_;
};
} // namespace Model
} // namespace LmzTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LMZTEST_MODEL_LISTPRODUCTSBYPOPCODEREQUEST_H_
