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

#include <alibabacloud/dataworks-public/model/CreateManualDagRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateManualDagRequest;

CreateManualDagRequest::CreateManualDagRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "CreateManualDag")
{
	setMethod(HttpRequest::Method::Post);
}

CreateManualDagRequest::~CreateManualDagRequest()
{}

std::string CreateManualDagRequest::getProjectName()const
{
	return projectName_;
}

void CreateManualDagRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string CreateManualDagRequest::getBizdate()const
{
	return bizdate_;
}

void CreateManualDagRequest::setBizdate(const std::string& bizdate)
{
	bizdate_ = bizdate;
	setParameter("Bizdate", bizdate);
}

std::string CreateManualDagRequest::getFlowName()const
{
	return flowName_;
}

void CreateManualDagRequest::setFlowName(const std::string& flowName)
{
	flowName_ = flowName;
	setParameter("FlowName", flowName);
}

std::string CreateManualDagRequest::getDagPara()const
{
	return dagPara_;
}

void CreateManualDagRequest::setDagPara(const std::string& dagPara)
{
	dagPara_ = dagPara;
	setParameter("DagPara", dagPara);
}

std::string CreateManualDagRequest::getNodePara()const
{
	return nodePara_;
}

void CreateManualDagRequest::setNodePara(const std::string& nodePara)
{
	nodePara_ = nodePara;
	setParameter("NodePara", nodePara);
}

