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

#ifndef ALIBABACLOUD_SAE_MODEL_BINDSLBREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_BINDSLBREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT BindSlbRequest : public RoaServiceRequest {
public:
	BindSlbRequest();
	~BindSlbRequest();
	std::string getIntranet() const;
	void setIntranet(const std::string &intranet);
	std::string getIntranetSlbId() const;
	void setIntranetSlbId(const std::string &intranetSlbId);
	std::string getInternetSlbId() const;
	void setInternetSlbId(const std::string &internetSlbId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getInternet() const;
	void setInternet(const std::string &internet);

private:
	std::string intranet_;
	std::string intranetSlbId_;
	std::string internetSlbId_;
	std::string appId_;
	std::string internet_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_BINDSLBREQUEST_H_
