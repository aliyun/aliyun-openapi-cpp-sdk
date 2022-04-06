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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_RUNMEDQAREQUEST_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_RUNMEDQAREQUEST_H_

#include <alibabacloud/imageprocess/ImageprocessExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageprocess {
namespace Model {
class ALIBABACLOUD_IMAGEPROCESS_EXPORT RunMedQARequest : public RpcServiceRequest {
public:
	struct AnswerImageDataList {
		std::string answerImageData;
	};
	struct AnswerTextList {
		std::string answerText;
	};
	struct AnswerImageURLList {
		std::string answerImageURL;
	};
	RunMedQARequest();
	~RunMedQARequest();
	std::string getSessionId() const;
	void setSessionId(const std::string &sessionId);
	std::string getOrgName() const;
	void setOrgName(const std::string &orgName);
	std::vector<AnswerImageDataList> getAnswerImageDataList() const;
	void setAnswerImageDataList(const std::vector<AnswerImageDataList> &answerImageDataList);
	std::vector<AnswerTextList> getAnswerTextList() const;
	void setAnswerTextList(const std::vector<AnswerTextList> &answerTextList);
	std::string getDepartment() const;
	void setDepartment(const std::string &department);
	std::vector<AnswerImageURLList> getAnswerImageURLList() const;
	void setAnswerImageURLList(const std::vector<AnswerImageURLList> &answerImageURLList);
	std::string getQuestionType() const;
	void setQuestionType(const std::string &questionType);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);

private:
	std::string sessionId_;
	std::string orgName_;
	std::vector<AnswerImageDataList> answerImageDataList_;
	std::vector<AnswerTextList> answerTextList_;
	std::string department_;
	std::vector<AnswerImageURLList> answerImageURLList_;
	std::string questionType_;
	std::string orgId_;
};
} // namespace Model
} // namespace Imageprocess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_RUNMEDQAREQUEST_H_
