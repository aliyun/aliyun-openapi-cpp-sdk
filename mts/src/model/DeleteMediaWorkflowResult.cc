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

#include <alibabacloud/mts/model/DeleteMediaWorkflowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

DeleteMediaWorkflowResult::DeleteMediaWorkflowResult() :
	ServiceResult()
{}

DeleteMediaWorkflowResult::DeleteMediaWorkflowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteMediaWorkflowResult::~DeleteMediaWorkflowResult()
{}

void DeleteMediaWorkflowResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto mediaWorkflowNode = value["MediaWorkflow"];
	if(!mediaWorkflowNode["MediaWorkflowId"].isNull())
		mediaWorkflow_.mediaWorkflowId = mediaWorkflowNode["MediaWorkflowId"].asString();
	if(!mediaWorkflowNode["Name"].isNull())
		mediaWorkflow_.name = mediaWorkflowNode["Name"].asString();
	if(!mediaWorkflowNode["Topology"].isNull())
		mediaWorkflow_.topology = mediaWorkflowNode["Topology"].asString();
	if(!mediaWorkflowNode["State"].isNull())
		mediaWorkflow_.state = mediaWorkflowNode["State"].asString();
	if(!mediaWorkflowNode["CreationTime"].isNull())
		mediaWorkflow_.creationTime = mediaWorkflowNode["CreationTime"].asString();

}

DeleteMediaWorkflowResult::MediaWorkflow DeleteMediaWorkflowResult::getMediaWorkflow()const
{
	return mediaWorkflow_;
}

