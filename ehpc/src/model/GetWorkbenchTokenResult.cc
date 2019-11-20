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

#include <alibabacloud/ehpc/model/GetWorkbenchTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetWorkbenchTokenResult::GetWorkbenchTokenResult() :
	ServiceResult()
{}

GetWorkbenchTokenResult::GetWorkbenchTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkbenchTokenResult::~GetWorkbenchTokenResult()
{}

void GetWorkbenchTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto rootNode = value["root"];
	auto instanceLoginViewNode = rootNode["instanceLoginView"];
	if(!instanceLoginViewNode["viewName"].isNull())
		root_.instanceLoginView.viewName = instanceLoginViewNode["viewName"].asString();
	if(!instanceLoginViewNode["defaultViewUrl"].isNull())
		root_.instanceLoginView.defaultViewUrl = instanceLoginViewNode["defaultViewUrl"].asString();
	if(!instanceLoginViewNode["baseViewUrl"].isNull())
		root_.instanceLoginView.baseViewUrl = instanceLoginViewNode["baseViewUrl"].asString();
	if(!instanceLoginViewNode["terminalViewUrl"].isNull())
		root_.instanceLoginView.terminalViewUrl = instanceLoginViewNode["terminalViewUrl"].asString();
	if(!instanceLoginViewNode["fileTreeViewUrl"].isNull())
		root_.instanceLoginView.fileTreeViewUrl = instanceLoginViewNode["fileTreeViewUrl"].asString();
	if(!instanceLoginViewNode["rdpViewUrl"].isNull())
		root_.instanceLoginView.rdpViewUrl = instanceLoginViewNode["rdpViewUrl"].asString();

}

GetWorkbenchTokenResult::Root GetWorkbenchTokenResult::getRoot()const
{
	return root_;
}

