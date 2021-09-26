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

#include <alibabacloud/vs/model/UploadDeviceRecordRequest.h>

using AlibabaCloud::Vs::Model::UploadDeviceRecordRequest;

UploadDeviceRecordRequest::UploadDeviceRecordRequest() :
	RpcServiceRequest("vs", "2018-12-12", "UploadDeviceRecord")
{
	setMethod(HttpRequest::Method::Post);
}

UploadDeviceRecordRequest::~UploadDeviceRecordRequest()
{}

std::string UploadDeviceRecordRequest::getSearchCriteria()const
{
	return searchCriteria_;
}

void UploadDeviceRecordRequest::setSearchCriteria(const std::string& searchCriteria)
{
	searchCriteria_ = searchCriteria;
	setParameter("SearchCriteria", searchCriteria);
}

std::string UploadDeviceRecordRequest::getUploadParams()const
{
	return uploadParams_;
}

void UploadDeviceRecordRequest::setUploadParams(const std::string& uploadParams)
{
	uploadParams_ = uploadParams;
	setParameter("UploadParams", uploadParams);
}

std::string UploadDeviceRecordRequest::getShowLog()const
{
	return showLog_;
}

void UploadDeviceRecordRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string UploadDeviceRecordRequest::getStreamId()const
{
	return streamId_;
}

void UploadDeviceRecordRequest::setStreamId(const std::string& streamId)
{
	streamId_ = streamId;
	setParameter("StreamId", streamId);
}

std::string UploadDeviceRecordRequest::getUploadId()const
{
	return uploadId_;
}

void UploadDeviceRecordRequest::setUploadId(const std::string& uploadId)
{
	uploadId_ = uploadId;
	setParameter("UploadId", uploadId);
}

std::string UploadDeviceRecordRequest::getUploadType()const
{
	return uploadType_;
}

void UploadDeviceRecordRequest::setUploadType(const std::string& uploadType)
{
	uploadType_ = uploadType;
	setParameter("UploadType", uploadType);
}

std::string UploadDeviceRecordRequest::getUploadMode()const
{
	return uploadMode_;
}

void UploadDeviceRecordRequest::setUploadMode(const std::string& uploadMode)
{
	uploadMode_ = uploadMode;
	setParameter("UploadMode", uploadMode);
}

long UploadDeviceRecordRequest::getOwnerId()const
{
	return ownerId_;
}

void UploadDeviceRecordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UploadDeviceRecordRequest::getDeviceId()const
{
	return deviceId_;
}

void UploadDeviceRecordRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

