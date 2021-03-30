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

#include <alibabacloud/dms-enterprise/model/CreateDataCronClearOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateDataCronClearOrderRequest;

CreateDataCronClearOrderRequest::CreateDataCronClearOrderRequest() :
	RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateDataCronClearOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDataCronClearOrderRequest::~CreateDataCronClearOrderRequest()
{}

long CreateDataCronClearOrderRequest::getTid()const
{
	return tid_;
}

void CreateDataCronClearOrderRequest::setTid(long tid)
{
	tid_ = tid;
	setParameter("Tid", std::to_string(tid));
}

std::string CreateDataCronClearOrderRequest::getAttachmentKey()const
{
	return attachmentKey_;
}

void CreateDataCronClearOrderRequest::setAttachmentKey(const std::string& attachmentKey)
{
	attachmentKey_ = attachmentKey;
	setParameter("AttachmentKey", attachmentKey);
}

Struct CreateDataCronClearOrderRequest::getParam()const
{
	return param_;
}

void CreateDataCronClearOrderRequest::setParam(const Struct& param)
{
	param_ = param;
	for(int dep1 = 0; dep1!= param.size(); dep1++) {
		auto paramObj = param.at(dep1);
		std::string paramObjStr = "Param." + std::to_string(dep1 + 1);
		setParameter(paramObjStr + ".Classify", paramObj.classify);
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
		for(int dep2 = 0; dep2!= paramObj.cronClearItemList.size(); dep2++) {
			auto cronClearItemListObj = paramObj.cronClearItemList.at(dep2);
			std::string cronClearItemListObjStr = paramObjStr + "CronClearItemList." + std::to_string(dep2 + 1);
			for(int dep3 = 0; dep3!= cronClearItemListObj.cronClearItemListItem.size(); dep3++) {
				auto cronClearItemListItemObj = cronClearItemListObj.cronClearItemListItem.at(dep3);
				std::string cronClearItemListItemObjStr = cronClearItemListObjStr + "CronClearItemListItem." + std::to_string(dep3 + 1);
				setParameter(cronClearItemListItemObjStr + ".FilterSQL", cronClearItemListItemObj.filterSQL);
				setParameter(cronClearItemListItemObjStr + ".RemainDays", std::to_string(cronClearItemListItemObj.remainDays));
				setParameter(cronClearItemListItemObjStr + ".TableName", cronClearItemListItemObj.tableName);
				setParameter(cronClearItemListItemObjStr + ".ColumnName", cronClearItemListItemObj.columnName);
				setParameter(cronClearItemListItemObjStr + ".TimeUnit", cronClearItemListItemObj.timeUnit);
			}
		}
		setParameter(paramObjStr + ".DurationHour", std::to_string(paramObj.durationHour));
		setParameter(paramObjStr + ".CronFormat", paramObj.cronFormat);
		setParameter(paramObjStr + ".SpecifyDuration", paramObj.specifyDuration ? "true" : "false");
	}
}

std::string CreateDataCronClearOrderRequest::getComment()const
{
	return comment_;
}

void CreateDataCronClearOrderRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

Array CreateDataCronClearOrderRequest::getRelatedUserList()const
{
	return relatedUserList_;
}

void CreateDataCronClearOrderRequest::setRelatedUserList(const Array& relatedUserList)
{
	relatedUserList_ = relatedUserList;
	for(int dep1 = 0; dep1!= relatedUserList.size(); dep1++) {
		auto relatedUserListObj = relatedUserList.at(dep1);
		std::string relatedUserListObjStr = "RelatedUserList." + std::to_string(dep1 + 1);
		setParameter(relatedUserListObjStr + ".RelatedUserList", std::to_string(relatedUserListObj.relatedUserList));
	}
}

