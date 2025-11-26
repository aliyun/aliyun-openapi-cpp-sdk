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

#ifndef ALIBABACLOUD_ANYTRANS_MODEL_TERMEDITREQUEST_H_
#define ALIBABACLOUD_ANYTRANS_MODEL_TERMEDITREQUEST_H_

#include <alibabacloud/anytrans/AnyTransExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AnyTrans {
namespace Model {
class ALIBABACLOUD_ANYTRANS_EXPORT TermEditRequest : public RoaServiceRequest {
public:
	struct Ext {
		struct TermsItem {
			std::string tgt;
			std::string termId;
			std::string src;
		};
		termsItem termsItem;
		std::vector<termsItem> terms;
	};
	TermEditRequest();
	~TermEditRequest();
	ext getExt() const;
	void setExt(const ext &ext);
	std::string getSourceLanguage() const;
	void setSourceLanguage(const std::string &sourceLanguage);
	std::string getScene() const;
	void setScene(const std::string &scene);
	std::string getAction() const;
	void setAction(const std::string &action);
	std::string getTargetLanguage() const;
	void setTargetLanguage(const std::string &targetLanguage);
	std::string getWorkspaceId() const;
	void setWorkspaceId(const std::string &workspaceId);

private:
	ext ext_;
	std::string sourceLanguage_;
	std::string scene_;
	std::string action_;
	std::string targetLanguage_;
	std::string workspaceId_;
};
} // namespace Model
} // namespace AnyTrans
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ANYTRANS_MODEL_TERMEDITREQUEST_H_
