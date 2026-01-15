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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_DISPATCHCONSOLEAPIFORPARTNERREQUEST_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_DISPATCHCONSOLEAPIFORPARTNERREQUEST_H_

#include <alibabacloud/websitebuild/WebsiteBuildExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace WebsiteBuild {
namespace Model {
class ALIBABACLOUD_WEBSITEBUILD_EXPORT DispatchConsoleAPIForPartnerRequest : public RpcServiceRequest {
public:
	DispatchConsoleAPIForPartnerRequest();
	~DispatchConsoleAPIForPartnerRequest();
	std::string getProduct() const;
	void setProduct(const std::string &product);
	std::string getLiveToken() const;
	void setLiveToken(const std::string &liveToken);
	std::string getSiteHost() const;
	void setSiteHost(const std::string &siteHost);
	std::string getParams() const;
	void setParams(const std::string &params);
	std::string getOperation() const;
	void setOperation(const std::string &operation);

private:
	std::string product_;
	std::string liveToken_;
	std::string siteHost_;
	std::string params_;
	std::string operation_;
};
} // namespace Model
} // namespace WebsiteBuild
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_DISPATCHCONSOLEAPIFORPARTNERREQUEST_H_
