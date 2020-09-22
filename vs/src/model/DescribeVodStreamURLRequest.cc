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

#include <alibabacloud/vs/model/DescribeVodStreamURLRequest.h>

using AlibabaCloud::Vs::Model::DescribeVodStreamURLRequest;

DescribeVodStreamURLRequest::DescribeVodStreamURLRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVodStreamURL")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVodStreamURLRequest::~DescribeVodStreamURLRequest()
{}

std::string DescribeVodStreamURLRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVodStreamURLRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVodStreamURLRequest::getTxId()const
{
	return txId_;
}

void DescribeVodStreamURLRequest::setTxId(const std::string& txId)
{
	txId_ = txId;
	setParameter("TxId", txId);
}

long DescribeVodStreamURLRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodStreamURLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodStreamURLRequest::getUrl()const
{
	return url_;
}

void DescribeVodStreamURLRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

