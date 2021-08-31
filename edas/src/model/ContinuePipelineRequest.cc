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

#include <alibabacloud/edas/model/ContinuePipelineRequest.h>

using AlibabaCloud::Edas::Model::ContinuePipelineRequest;

ContinuePipelineRequest::ContinuePipelineRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/changeorder/pipeline_batch_confirm");
	setMethod(HttpRequest::Method::Get);
}

ContinuePipelineRequest::~ContinuePipelineRequest()
{}

bool ContinuePipelineRequest::getConfirm()const
{
	return confirm_;
}

void ContinuePipelineRequest::setConfirm(bool confirm)
{
	confirm_ = confirm;
	setParameter("Confirm", confirm ? "true" : "false");
}

std::string ContinuePipelineRequest::getPipelineId()const
{
	return pipelineId_;
}

void ContinuePipelineRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

