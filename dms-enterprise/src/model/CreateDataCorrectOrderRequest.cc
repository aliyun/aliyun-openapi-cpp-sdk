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

#include <alibabacloud/dms-enterprise/model/CreateDataCorrectOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateDataCorrectOrderRequest;

CreateDataCorrectOrderRequest::CreateDataCorrectOrderRequest() :
	RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateDataCorrectOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDataCorrectOrderRequest::~CreateDataCorrectOrderRequest()
{}

long CreateDataCorrectOrderRequest::getTid()const
{
	return tid_;
}

void CreateDataCorrectOrderRequest::setTid(long tid)
{
	tid_ = tid;
	setParameter("Tid", std::to_string(tid));
}

std::string CreateDataCorrectOrderRequest::getAttachmentKey()const
{
	return attachmentKey_;
}

void CreateDataCorrectOrderRequest::setAttachmentKey(const std::string& attachmentKey)
{
	attachmentKey_ = attachmentKey;
	setParameter("AttachmentKey", attachmentKey);
}

Struct CreateDataCorrectOrderRequest::getParam()const
{
	return param_;
}

void CreateDataCorrectOrderRequest::setParam(const Struct& param)
{
	param_ = param;
	for(int dep1 = 0; dep1!= param.size(); dep1++) {
		auto paramObj = param.at(dep1);
		std::string paramObjStr = "Param." + std::to_string(dep1 + 1);
		setParameter(paramObjStr + ".SqlType", paramObj.sqlType);
		setParameter(paramObjStr + ".Classify", paramObj.classify);
		setParameter(paramObjStr + ".RollbackSQL", paramObj.rollbackSQL);
		setParameter(paramObjStr + ".RollbackSqlType", paramObj.rollbackSqlType);
		for(int dep2 = 0; dep2!= paramObj.dbItemList.size(); dep2++) {
			auto dbItemListObj = paramObj.dbItemList.at(dep2);
			std::string dbItemListObjStr = paramObjStr + "DbItemList." + std::to_string(dep2 + 1);
			for(int dep3 = 0; dep3!= dbItemListObj.dbItemListItem.size(); dep3++) {
				auto dbItemListItemObj = dbItemListObj.dbItemListItem.at(dep3);
				std::string dbItemListItemObjStr = dbItemListObjStr + "DbItemListItem." + std::to_string(dep3 + 1);
				setParameter(dbItemListItemObjStr + ".DbId", std::to_string(dbItemListItemObj.dbId));
				setParameter(dbItemListItemObjStr + ".Logic", dbItemListItemObj.logic ? "true" : "false");
			}
		}
		setParameter(paramObjStr + ".ExecSQL", paramObj.execSQL);
		setParameter(paramObjStr + ".EstimateAffectRows", std::to_string(paramObj.estimateAffectRows));
		setParameter(paramObjStr + ".RollbackAttachmentName", paramObj.rollbackAttachmentName);
		setParameter(paramObjStr + ".AttachmentName", paramObj.attachmentName);
	}
}

std::string CreateDataCorrectOrderRequest::getComment()const
{
	return comment_;
}

void CreateDataCorrectOrderRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

Array CreateDataCorrectOrderRequest::getRelatedUserList()const
{
	return relatedUserList_;
}

void CreateDataCorrectOrderRequest::setRelatedUserList(const Array& relatedUserList)
{
	relatedUserList_ = relatedUserList;
	for(int dep1 = 0; dep1!= relatedUserList.size(); dep1++) {
		auto relatedUserListObj = relatedUserList.at(dep1);
		std::string relatedUserListObjStr = "RelatedUserList." + std::to_string(dep1 + 1);
		setParameter(relatedUserListObjStr + ".RelatedUserList", std::to_string(relatedUserListObj.relatedUserList));
	}
}

