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

#include <alibabacloud/dms-enterprise/model/CreateStructSyncOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateStructSyncOrderRequest;

CreateStructSyncOrderRequest::CreateStructSyncOrderRequest() :
	RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateStructSyncOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStructSyncOrderRequest::~CreateStructSyncOrderRequest()
{}

long CreateStructSyncOrderRequest::getTid()const
{
	return tid_;
}

void CreateStructSyncOrderRequest::setTid(long tid)
{
	tid_ = tid;
	setParameter("Tid", std::to_string(tid));
}

std::string CreateStructSyncOrderRequest::getAttachmentKey()const
{
	return attachmentKey_;
}

void CreateStructSyncOrderRequest::setAttachmentKey(const std::string& attachmentKey)
{
	attachmentKey_ = attachmentKey;
	setParameter("AttachmentKey", attachmentKey);
}

Struct CreateStructSyncOrderRequest::getParam()const
{
	return param_;
}

void CreateStructSyncOrderRequest::setParam(const Struct& param)
{
	param_ = param;
	for(int dep1 = 0; dep1!= param.size(); dep1++) {
		auto paramObj = param.at(dep1);
		std::string paramObjStr = "Param." + std::to_string(dep1 + 1);
		setParameter(paramObjStr + ".SyncType", paramObj.syncType);
		for(int dep2 = 0; dep2!= paramObj.tableInfoList.size(); dep2++) {
			auto tableInfoListObj = paramObj.tableInfoList.at(dep2);
			std::string tableInfoListObjStr = paramObjStr + "TableInfoList." + std::to_string(dep2 + 1);
			for(int dep3 = 0; dep3!= tableInfoListObj.tableInfoListItem.size(); dep3++) {
				auto tableInfoListItemObj = tableInfoListObj.tableInfoListItem.at(dep3);
				std::string tableInfoListItemObjStr = tableInfoListObjStr + "TableInfoListItem." + std::to_string(dep3 + 1);
				setParameter(tableInfoListItemObjStr + ".SourceTableName", tableInfoListItemObj.sourceTableName);
				setParameter(tableInfoListItemObjStr + ".TargetTableName", tableInfoListItemObj.targetTableName);
			}
		}
		for(int dep2 = 0; dep2!= paramObj.source.size(); dep2++) {
			auto sourceObj = paramObj.source.at(dep2);
			std::string sourceObjStr = paramObjStr + "Source." + std::to_string(dep2 + 1);
			setParameter(sourceObjStr + ".DbSearchName", sourceObj.dbSearchName);
			setParameter(sourceObjStr + ".VersionId", sourceObj.versionId);
			setParameter(sourceObjStr + ".DbId", std::to_string(sourceObj.dbId));
			setParameter(sourceObjStr + ".Logic", sourceObj.logic ? "true" : "false");
		}
		setParameter(paramObjStr + ".IgnoreError", paramObj.ignoreError ? "true" : "false");
		for(int dep2 = 0; dep2!= paramObj.target.size(); dep2++) {
			auto targetObj = paramObj.target.at(dep2);
			std::string targetObjStr = paramObjStr + "Target." + std::to_string(dep2 + 1);
			setParameter(targetObjStr + ".DbSearchName", targetObj.dbSearchName);
			setParameter(targetObjStr + ".VersionId", targetObj.versionId);
			setParameter(targetObjStr + ".DbId", std::to_string(targetObj.dbId));
			setParameter(targetObjStr + ".Logic", targetObj.logic ? "true" : "false");
		}
	}
}

std::string CreateStructSyncOrderRequest::getComment()const
{
	return comment_;
}

void CreateStructSyncOrderRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

Array CreateStructSyncOrderRequest::getRelatedUserList()const
{
	return relatedUserList_;
}

void CreateStructSyncOrderRequest::setRelatedUserList(const Array& relatedUserList)
{
	relatedUserList_ = relatedUserList;
	for(int dep1 = 0; dep1!= relatedUserList.size(); dep1++) {
		auto relatedUserListObj = relatedUserList.at(dep1);
		std::string relatedUserListObjStr = "RelatedUserList." + std::to_string(dep1 + 1);
		setParameter(relatedUserListObjStr + ".RelatedUserList", std::to_string(relatedUserListObj.relatedUserList));
	}
}

